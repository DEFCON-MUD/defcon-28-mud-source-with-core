inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 23, 8 }));
  set_short( "Corridor - x49y23z8" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y24z8.c",
  "south" : DIR+"/rooms/x49y22z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
