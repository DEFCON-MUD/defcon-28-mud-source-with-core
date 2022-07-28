inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 47, 2 }));
  set_short( "Hallway - x49y47z2" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y48z2.c",
  "south" : DIR+"/rooms/x49y46z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
