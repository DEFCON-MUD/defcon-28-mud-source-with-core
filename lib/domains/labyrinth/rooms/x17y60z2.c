inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 60, 2 }));
  set_short( "Corridor - x17y60z2" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y60z2.c",
  "east" : DIR+"/rooms/x18y60z2.c",
  "south" : DIR+"/rooms/x17y59z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
