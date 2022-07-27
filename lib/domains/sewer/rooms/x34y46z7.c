inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 46, 7 }));
  set_short( "Hallway - x34y46z7" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y46z7.c",
  "east" : DIR+"/rooms/x35y46z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
