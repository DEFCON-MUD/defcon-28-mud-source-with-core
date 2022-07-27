inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 4, 3 }));
  set_short( "Corridor - x48y4z3" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y4z3.c",
  "east" : DIR+"/rooms/x49y4z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
