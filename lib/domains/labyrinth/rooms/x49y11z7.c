inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 11, 7 }));
  set_short( "Hallway - x49y11z7" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y12z7.c",
  "south" : DIR+"/rooms/x49y10z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
