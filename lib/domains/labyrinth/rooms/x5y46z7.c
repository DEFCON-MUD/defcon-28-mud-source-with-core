inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 46, 7 }));
  set_short( "Hallway - x5y46z7" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y47z7.c",
  "south" : DIR+"/rooms/x5y45z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
