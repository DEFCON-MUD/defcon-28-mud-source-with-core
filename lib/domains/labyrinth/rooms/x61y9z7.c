inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 9, 7 }));
  set_short( "Hallway - x61y9z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y10z7.c",
  "south" : DIR+"/rooms/x61y8z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
