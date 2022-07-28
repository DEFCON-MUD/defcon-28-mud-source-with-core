inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 0 }));
  set_short( "Corridor - x49y22z0" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y22z0.c",
  "east" : DIR+"/rooms/x50y22z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
