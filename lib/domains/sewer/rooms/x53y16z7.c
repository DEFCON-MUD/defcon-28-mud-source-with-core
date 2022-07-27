inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 7 }));
  set_short( "Corridor - x53y16z7" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y17z7.c",
  "south" : DIR+"/rooms/x53y15z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
