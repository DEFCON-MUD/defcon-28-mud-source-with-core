inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 14, 0 }));
  set_short( "Corridor - x14y14z0" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y14z0.c",
  "east" : DIR+"/rooms/x15y14z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
