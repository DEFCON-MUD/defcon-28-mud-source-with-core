inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 5 }));
  set_short( "Hallway - x57y36z5" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y36z5.c",
  "east" : DIR+"/rooms/x58y36z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
