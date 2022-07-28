inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 8 }));
  set_short( "Corridor - x45y22z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y22z8.c",
  "east" : DIR+"/rooms/x46y22z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
