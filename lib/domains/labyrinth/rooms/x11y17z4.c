inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 4 }));
  set_short( "Passage - x11y17z4" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z4.c",
  "south" : DIR+"/rooms/x11y16z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
