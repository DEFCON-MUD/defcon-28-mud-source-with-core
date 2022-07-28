inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 25, 3 }));
  set_short( "Hallway - x9y25z3" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y26z3.c",
  "south" : DIR+"/rooms/x9y24z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
