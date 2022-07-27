inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 62, 9 }));
  set_short( "Hallway - x53y62z9" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y62z9.c",
  "south" : DIR+"/rooms/x53y61z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
