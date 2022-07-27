inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 9 }));
  set_short( "Corridor - x5y46z9" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y47z9.c",
  "south" : DIR+"/rooms/x5y45z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
