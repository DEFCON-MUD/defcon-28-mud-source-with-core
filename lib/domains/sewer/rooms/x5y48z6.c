inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 6 }));
  set_short( "Passage - x5y48z6" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z6.c",
  "east" : DIR+"/rooms/x6y48z6.c",
  "north" : DIR+"/rooms/x5y49z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
