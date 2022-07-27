inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 6 }));
  set_short( "Hallway - x57y46z6" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y46z6.c",
  "south" : DIR+"/rooms/x57y45z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
