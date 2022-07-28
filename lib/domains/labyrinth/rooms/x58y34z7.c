inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 34, 7 }));
  set_short( "Corridor - x58y34z7" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y34z7.c",
  "east" : DIR+"/rooms/x59y34z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
