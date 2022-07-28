inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 61, 9 }));
  set_short( "Corridor - x49y61z9" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y62z9.c",
  "south" : DIR+"/rooms/x49y60z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
