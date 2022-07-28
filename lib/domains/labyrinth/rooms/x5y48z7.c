inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 7 }));
  set_short( "Hallway - x5y48z7" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y49z7.c",
  "south" : DIR+"/rooms/x5y47z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
