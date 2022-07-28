inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 47, 9 }));
  set_short( "Hallway - x49y47z9" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y48z9.c",
  "south" : DIR+"/rooms/x49y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
