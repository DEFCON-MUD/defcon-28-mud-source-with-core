inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 0 }));
  set_short( "Hallway - x43y14z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y14z0.c",
  "south" : DIR+"/rooms/x43y13z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
