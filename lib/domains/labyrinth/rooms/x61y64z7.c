inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 7 }));
  set_short( "Corridor - x61y64z7" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z7.c",
  "east" : DIR+"/rooms/x62y64z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
