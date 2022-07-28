inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 0 }));
  set_short( "Passage - x43y36z0" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y36z0.c",
  "north" : DIR+"/rooms/x43y37z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
