inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 32, 8 }));
  set_short( "Corridor - x11y32z8" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y32z8.c",
  "south" : DIR+"/rooms/x11y31z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
