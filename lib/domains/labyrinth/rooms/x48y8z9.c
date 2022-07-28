inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 8, 9 }));
  set_short( "Corridor - x48y8z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y8z9.c",
  "east" : DIR+"/rooms/x49y8z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
