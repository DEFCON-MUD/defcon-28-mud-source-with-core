inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 6 }));
  set_short( "Corridor - x45y32z6" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y32z6.c",
  "south" : DIR+"/rooms/x45y31z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
