inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 5 }));
  set_short( "Passage - x47y44z5" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y44z5.c",
  "north" : DIR+"/rooms/x47y45z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
