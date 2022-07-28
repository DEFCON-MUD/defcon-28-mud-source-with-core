inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 24, 1 }));
  set_short( "Hallway - x47y24z1" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y24z1.c",
  "east" : DIR+"/rooms/x48y24z1.c",
  "north" : DIR+"/rooms/x47y25z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
