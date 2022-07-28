inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 1 }));
  set_short( "Corridor - x24y22z1" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z1.c",
  "east" : DIR+"/rooms/x25y22z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
