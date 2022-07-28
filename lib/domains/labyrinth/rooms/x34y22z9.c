inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 22, 9 }));
  set_short( "Corridor - x34y22z9" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y22z9.c",
  "east" : DIR+"/rooms/x35y22z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
