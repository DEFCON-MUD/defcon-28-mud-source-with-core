inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 40, 2 }));
  set_short( "Corridor - x13y40z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y40z2.c",
  "east" : DIR+"/rooms/x14y40z2.c",
  "south" : DIR+"/rooms/x13y39z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
