inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 14, 2 }));
  set_short( "Hallway - x19y14z2" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y14z2.c",
  "east" : DIR+"/rooms/x20y14z2.c",
  "north" : DIR+"/rooms/x19y15z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
