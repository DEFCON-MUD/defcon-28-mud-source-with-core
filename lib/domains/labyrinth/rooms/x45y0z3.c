inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 0, 3 }));
  set_short( "Corridor - x45y0z3" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y0z3.c",
  "east" : DIR+"/rooms/x46y0z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
