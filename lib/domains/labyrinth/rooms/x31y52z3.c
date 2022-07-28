inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 3 }));
  set_short( "Corridor - x31y52z3" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y52z3.c",
  "north" : DIR+"/rooms/x31y53z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
