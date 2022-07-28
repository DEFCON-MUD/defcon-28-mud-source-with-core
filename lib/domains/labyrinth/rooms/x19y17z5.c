inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 17, 5 }));
  set_short( "Passage - x19y17z5" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y18z5.c",
  "south" : DIR+"/rooms/x19y16z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
