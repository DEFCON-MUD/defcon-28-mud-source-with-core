inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 19, 6 }));
  set_short( "Hallway - x27y19z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y20z6.c",
  "south" : DIR+"/rooms/x27y18z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
