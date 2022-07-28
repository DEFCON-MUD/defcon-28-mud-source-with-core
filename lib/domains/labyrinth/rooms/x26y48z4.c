inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 48, 4 }));
  set_short( "Corridor - x26y48z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y48z4.c",
  "east" : DIR+"/rooms/x27y48z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
