inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 46, 9 }));
  set_short( "Corridor - x24y46z9" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y46z9.c",
  "east" : DIR+"/rooms/x25y46z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
