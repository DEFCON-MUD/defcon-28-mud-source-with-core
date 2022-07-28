inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 62, 3 }));
  set_short( "Passage - x5y62z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y62z3.c",
  "east" : DIR+"/rooms/x6y62z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
