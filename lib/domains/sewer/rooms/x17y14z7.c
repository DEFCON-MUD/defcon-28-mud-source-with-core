inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 7 }));
  set_short( "Hallway - x17y14z7" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y14z7.c",
  "south" : DIR+"/rooms/x17y13z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
