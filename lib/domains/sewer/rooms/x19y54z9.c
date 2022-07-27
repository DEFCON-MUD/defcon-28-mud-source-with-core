inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 9 }));
  set_short( "Corridor - x19y54z9" );
set_objects( DIR+"/monsters/thnian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y54z9.c",
  "east" : DIR+"/rooms/x20y54z9.c",
  "north" : DIR+"/rooms/x19y55z9.c",
  "south" : DIR+"/rooms/x19y53z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
