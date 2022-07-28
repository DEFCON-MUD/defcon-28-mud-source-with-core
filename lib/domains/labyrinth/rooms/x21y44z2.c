inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 2 }));
  set_short( "Passage - x21y44z2" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y44z2.c",
  "north" : DIR+"/rooms/x21y45z2.c",
  "south" : DIR+"/rooms/x21y43z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
