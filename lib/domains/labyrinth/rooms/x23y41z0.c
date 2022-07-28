inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 41, 0 }));
  set_short( "Passage - x23y41z0" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y42z0.c",
  "south" : DIR+"/rooms/x23y40z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
