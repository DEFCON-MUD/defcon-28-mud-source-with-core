inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 36, 0 }));
  set_short( "Hallway - x14y36z0" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y36z0.c",
  "east" : DIR+"/rooms/x15y36z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
