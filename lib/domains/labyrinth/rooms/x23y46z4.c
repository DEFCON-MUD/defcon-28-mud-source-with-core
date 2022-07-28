inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 4 }));
  set_short( "Corridor - x23y46z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y46z4.c",
  "south" : DIR+"/rooms/x23y45z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
