inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 45, 8 }));
  set_short( "Passage - x59y45z8" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y46z8.c",
  "south" : DIR+"/rooms/x59y44z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
