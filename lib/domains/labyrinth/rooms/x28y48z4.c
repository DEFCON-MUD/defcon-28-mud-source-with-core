inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 48, 4 }));
  set_short( "Hallway - x28y48z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y48z4.c",
  "east" : DIR+"/rooms/x29y48z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
