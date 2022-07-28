inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 7, 2 }));
  set_short( "Passage - x37y7z2" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y8z2.c",
  "south" : DIR+"/rooms/x37y6z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
