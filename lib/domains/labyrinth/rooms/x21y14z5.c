inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 5 }));
  set_short( "Hallway - x21y14z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z5.c",
  "north" : DIR+"/rooms/x21y15z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
