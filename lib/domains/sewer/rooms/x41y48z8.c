inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 8 }));
  set_short( "Passage - x41y48z8" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y48z8.c",
  "south" : DIR+"/rooms/x41y47z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
