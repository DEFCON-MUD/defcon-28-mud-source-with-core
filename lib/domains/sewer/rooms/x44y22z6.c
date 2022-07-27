inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 22, 6 }));
  set_short( "Corridor - x44y22z6" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y22z6.c",
  "east" : DIR+"/rooms/x45y22z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
