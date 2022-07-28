inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 36, 9 }));
  set_short( "Hallway - x59y36z9" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y37z9.c",
  "south" : DIR+"/rooms/x59y35z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
